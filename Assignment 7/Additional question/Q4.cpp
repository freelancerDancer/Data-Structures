void evenoddsort(vector<int> *arr) {
    vector<int> even;
    vector<int> odd;

    for(int i=0 ; i<n ; i++) {
        if(!(i%2)) {
            even.push_back(arr[i]);
        } else {
            odd.push_back(arr[i]);
        }
    }

    for(int i = 0 ; i<n-1 ; i++) {
        for(int j=0 ; i<n-i-1 ; j++) {
            if(even[j] > even[j+1]) {
                swap(even[j] , even[j+1]);
            }
        }
    }

    for(int i = 0 ; i<n-1 ; i++) {
        for(int j=0 ; i<n-i-1 ; j++) {
            if(odd[j] > odd[j+1]) {
                swap(odd[j] , odd[j+1]);
            }
        }
    }

    int k=0;
    for(int j = 0; j < even.size(); j++) {
        arr[k++] = even[j];
    }
    for(int j = 0; j < odd.size(); j++)
        arr[k++] = odd[j];
}