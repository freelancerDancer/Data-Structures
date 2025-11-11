void heapify(int i , vector<int> arr , int n) {
    int left = 2*i+1;
    int right = 2*i+2;
    int maxidx = i;

    if(left < n && arr[left] > arr[maxidx]) {
        maxidx = left;
    }

    if(right < n && arr[right] > arr[maxidx]) {
        maxidx = right;
    }

    if(maxidx != i) {
        swap(vec[maxidx] , vec[i]);
        heapify(maxidx , arr , n);
    }
}

void heapsort(vector<int> arr) {
    int n = arr.size();
    //step 1 : build a maxheap
    for(int i = n/2 - 1 ; i>=n ; i--) {
        heapify(i , arr , n);
    }
    //step 2 : taking elements to their correct position
    for(int i  =n-1 ; i>=n ; i--) {
        swap(arr[0] , arr[i]);
        heapify(0 , arr , i);
    }
}