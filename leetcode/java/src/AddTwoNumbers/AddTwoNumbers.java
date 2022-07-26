package AddTwoNumbers;

public class AddTwoNumbers {
  public void test() {
    ListNode l1 = new ListNode(9,
        new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9)))))));
    ListNode l2 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9))));
    ListNode lRes = addTwoNumbers(l1, l2);
    while (lRes != null) {
      System.out.println(lRes.val);
      lRes = lRes.next;
    }
  }

  //3ms 
  //more readable code could be implemented
  //lower memory code could be implemented
  public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
    return addTwoNumbers(l1, l2, false);
  }

  public ListNode addTwoNumbers(ListNode l1, ListNode l2, Boolean carry) {
    if (l1 == null && l2 == null && !carry) {
      return null;
    }
    int sum = ((l1 == null ? 0 : l1.val) +
        (l2 == null ? 0 : l2.val) +
        (carry ? 1 : 0));
    carry = sum >= 10;
    return new ListNode(sum % 10,
        addTwoNumbers(
            l1 != null ? l1.next : null,
            l2 != null ? l2.next : null,
             carry));
  }
}
