//we can detect cycles in graph by using disjoint set union
//unfion find disjoint
//union by rank

class UnionFind {

  private int size; // number of elements

  private int[] sz; // size of each component

  // if id[i] = i then i is a root
  private int[] id; // id[i] = parent of i

  private int numComponents; // number of components in union find

  /* CONSTRUCTER */
  public UnionFind(int size) {
    if (size <= 0) throw new IllegalArgumentException("size must be positive");
    this.size = numComponents = size;
    sz = new int[size];
    id = new int[size];
    for (int i = 0; i < size; i++) {
      id[i] = i; // link to itself
      sz[i] = 1; // each component is originally of size 1
    }
  }

  // find p belongs to which component/set

  public int find(int p) {
    // find the root of component set
    int root = p;
    while (root != id[root]) root = id[root];

    // compress the path leading back to the root
    // doing this operation will make the path from p to root shorter (PATH
    // COMPRESSION)
    while (p != root) {
      int next = id[p];
      id[p] = root;
      p = next;
    }
    return root;
  }

  /* alternative recursive find method(mereko to yehi psnd hai) */

  // public int find(int p){
  // if(p==id[p]) return p;
  // return id[p]=find(id[p]);
  // }

  // Return whether or not the elements 'p' and
  // 'q' are in the same components/set.
  public boolean connected(int p, int q) {
    return find(p) == find(q);
  }

  // return the size of the component/set that p belongs to
  public int componentSize(int p) {
    return sz[find(p)];
  }

  // return the number of components/sets int the UNION-FIND data structure//
  // disjoint set
  public int size() {
    return size;
  }

  // number of remaining components/sets
  public int components() {
    return numComponents;
  }

  // unify the two components/sets that p and q belong to
  public void unify(int p, int q) {
    if (connected(p, q)) return;
    int root1 = find(p);
    int root2 = find(q);

    // merge the smaller component int tha largeer one
    if (sz[root1] < sz[root2]) {
      id[root1] = root2;
      sz[root2] += sz[root1];
    } else {
      id[root2] = root1;
      sz[root1] += sz[root2];
    }

    // now the number of components/sets is reduced by 1
    numComponents--;
  }
}
