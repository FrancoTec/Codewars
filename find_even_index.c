int find_even_index(const int *values, int length) {
  
  int index = -1, total_sum=0, left_sum=0;
  
  for(int i = 0; i< length;i++) total_sum += values[i];
  
  for(int i = 0; i< length; i++){
    
    int right_sum = total_sum - left_sum - values[i];
    
    if(left_sum == right_sum) return i;
    
    left_sum += values[i];
    
  }
  
  return  -1;
  
}
