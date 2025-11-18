void bubblesort(int *arr , int n) {
    for(int i=0 ; i<n-1 ; i++) {
        for(int j = 0 ; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}


int icecreambar(int *arr, int n, int coins) {
    bubblesort(arr , n);

    int sum = 0, count = 0;

    for(int i = 0; i < n; i++) {
        if(sum + arr[i] > coins)
            break;
        sum += arr[i];
        count++;
    }

    return count;
}


int icecreambar(int *arr, int n, int cost, int coins) {
    int sum = 0;
    int count = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum > coins) {
            break;
        }
        count++;
    }

    return count;
}
