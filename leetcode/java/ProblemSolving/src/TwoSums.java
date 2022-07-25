import java.util.Arrays;
import java.util.HashMap;

public class TwoSums {

  public static void test() {
    int nums[] = { 3,3 };
    int target = 6;
    int[] indices = TwoSums.twoSum(nums, target);
    System.out.println(Arrays.toString(indices));
  }

  // O(n) time, O(n) space
  //3ms solution
  public static int[] twoSum(int[] nums, int target) {
    // create a map of the number and its index
    HashMap<Integer, Integer> numIndexMap = new HashMap<>();
    int[] result = new int[2];
    // loop through the nums array
    for (int i = 0; i < nums.length; i++) {
      // if map.containsKey(target-num[i]) return [i, map[target-num[i]]]
      if(numIndexMap.containsKey(target-nums[i])){
        result[0] = numIndexMap.get(target-nums[i]);
        result[1] = i;
        return result;
      }
      numIndexMap.put(nums[i], i);
    }
    return result;
  }
}
