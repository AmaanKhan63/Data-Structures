public class MyLinkedList {

      int data;
      MyLinkedList next;
      MyLinkedList head = null;
      MyLinkedList(int data) {
            this.data = data;
      }
//1.Constructor
      MyLinkedList(int data, MyLinkedList next) {
            this.data = data;
            this.next = next;
      }

     //2. add elements to the start or head of the linkedlist
      public void Add(MyLinkedList start,int x){
            MyLinkedList p=start;
            while(p.next!=null){
                  if(p.next.data>x)break;
                  p=p.next;


            }
            p.next=new MyLinkedList(x,p.next);
      }
 //3. Remove method to delete the given element from linkedlist
      public static MyLinkedList Remove(MyLinkedList start,int x){
            if (start==null||start.data>x)
                  return start;
            if(start.data==x){
                  return start.next;
            }
            for(MyLinkedList p=start;p.next!=null;p=p.next) {
                  if(p.next.data>x)break;
                  if(p.next.data==x){
                        p.next=p.next.next;
                        break;
                  }


            }
            return start;

      }

      //4. Size method to return the size of linkedlist
      static int size(MyLinkedList start) {
            int size=0;
            while(start!=null) {
                  ++size;
                  start=start.next;
            }
            return size;
      }

      //5. search method to find if the linkedlist contain the given element
      static boolean contain(MyLinkedList start, int d) {
            MyLinkedList p=start;
            while(p!=null) {
                  if(p.data==d) {
                        return true;}
                  p=p.next;
            }
            return false;
      }

     // 6. toString() method will return the string representation of the LinkedList
     // object with the string representation of each element in the list.
      public static String toString(MyLinkedList head) {
            String buf = "";

            for(MyLinkedList curr = head; curr != null; curr = curr.next) {
                  buf = buf + curr.data;
            }

            return buf ;
      }


      //7. compare method to check two linked list if they have the same value
      static boolean Compare(MyLinkedList headA, MyLinkedList headB) {

            MyLinkedList current1 = headA;
            MyLinkedList current2 = headB;

            while (current1 != null && current2 != null && current1.data == current2.data) {
                  current1 = current1.next;
                  current2 = current2.next;
            }

            if (current1 != null || current2 != null) {
                  // One of the lists has more items left in it. Otherwise, both lists are equal and fully traversed.
                  return false;
            }

            return true;
      }

      public static void main(String[] args) {
            //creating an object of linkedlist
            MyLinkedList l = new MyLinkedList(1);
            MyLinkedList p = l;
            p.next = new MyLinkedList(2);
            p = p.next;
            p.next = new MyLinkedList(3);
            p = p.next;
            p.next = new MyLinkedList(4);
            p = p.next;
            System.out.print(toString(l));
            l.Add(l, 5);
            System.out.print("\nAfter Adding 5: " +toString(l));

            l.Remove(l, 2);
            System.out.print("\nAfter Removing 2: " +toString(l));

            System.out.println("\nSize: " +size(l));
            System.out.println("Contain 3: " + contain(l, 3));

            //creating object of 2nd linkedlist
            MyLinkedList l1 = new MyLinkedList(1);
            MyLinkedList p1 = l1;
            p1.next = new MyLinkedList(3);
            p1 = p1.next;
            p1.next = new MyLinkedList(4);
            p1 = p1.next;
            p1.next = new MyLinkedList(5);
            p1 = p1.next;

            System.out.println("Comapre two linked list: " +  Compare(l, l1));
      }
}

