**Binary Search**
- ==Array must be SORTED==


**What we care?**
   - Where we start to look
   - Where we stop looking
   - Whats the midpoint of the current array
  
  **Worst Case Scenario** O(log n)
  - The targeted value doesn't exist in the array
  - The value is in the last division
  
  **Best Case Scenario** Ω(1)
- The value is at the first division

 ---
  **Pseudocode**
  - Repeat until the (sub)array is of size 0 (while start <= end)
      - Calculate the middle point of the current (sub)array. (Start + End)/2
      - If the target is at the middle, stop
      - Otherwise, if the target is less than what's at the middle, repeat, changing the end point tobe just to the left of the middle
      - Otherwise, if the target is greater than what's at the middle, repeat, changing the start point tobe just to the right of the middle. 
 
**Algorithm** (My Own Version)
1. Initialize
    1. int arr = an array of different sorted numbers
    2. int num = number to find in the array
    3. int start = for starting index
    5. int end = for the last index, `length_of_arr - 1`
    6. int mid = for the middle index 
2. while start <= end;  else go to last step
3. Calculate for `mid = (start + end)/2.0` 
4. If `arr[mid] == num` then print "The number exists in index {mid}"
5. `Else if arr[mid] > num`
6. `end = mid - 1`
7. `Else if arr[mid] < num`
8. `start = mid + 1`
9. Go back to step 3
10. Stop