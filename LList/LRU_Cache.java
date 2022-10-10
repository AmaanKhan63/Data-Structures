class LRUCache {

    Node head = new Node(0, 0), tail = new Node(0, 0);
    Map < Integer, Node > map = new HashMap(); // key -> integer, value -> node
    int capacity;

    // initialize the cache
    public LRUCache(int _capacity) {
        capacity = _capacity;
        head.next = tail;
        tail.prev = head;
    }

    // make key, receently used <3, ie remove from end of the list and, add it to the head of the list
    public int get(int key) {
        if (map.containsKey(key)) {
            Node node = map.get(key);
            remove(node);
            insert(node);
            return node.value;
        } else {
            return -1;
        }
    }

    // Insert the node at the head of the list
    public void put(int key, int value) {
        if (map.containsKey(key)) {
            remove(map.get(key));
        }
        if (map.size() == capacity) {
            remove(tail.prev);
        }
        insert(new Node(key, value));
    }

    private void remove(Node node) {
        map.remove(node.key);
        node.prev.next = node.next;
        node.next.prev = node.prev;
    }

    // insert key, value at the head of the list, and make it recently used <3
    private void insert(Node node) {
        map.put(node.key, node);
        node.next = head.next;
        node.next.prev = node;
        head.next = node;
        node.prev = head;
    }

    class Node {
        Node prev, next;
        int key, value;
        Node(int _key, int _value) {
            key = _key;
            value = _value;
        }
    }
}