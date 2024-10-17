    int left = 0;
    int right = a.size()-1;
    int mid = (left+right)/2;
    while(left <= right){ 
        if(a[mid]==target){
            return "YEs";
        }else{
            if(a[mid]>target){
                right=mid;
                
            }else{
                left = mid;
            }
        }
        mid = (left+right)/2 +1;
    }
    return "NOooo";
}