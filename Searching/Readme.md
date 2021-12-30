Binary_Search(a, lower_bound, upper_bound, val) // 'a' is the given array, 'lower_bound' is the index of the first array element, 'upper_bound' is the index  of the last array element, 'val' is the value to search

 - Step 1: set beg = lower_bound, end = upper_bound, pos = - 1  
 - Step 2: repeat steps 3 and 4 while beg <=end  
 - Step 3: set mid = (beg + end)/2  
 - Step 4: if a[mid] = val  
    set pos = mid  
    print pos  
    go to step 6  
    else if a[mid] > val  
    set end = mid - 1  
    else  
    set beg = mid + 1  
    [end of if]  
    [end of loop]  
 - Step 5: if pos = -1  
  print "value is not present in the array"  
  [end of if]  
 - Step 6: exit  
