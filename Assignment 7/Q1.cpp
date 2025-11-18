//selection sort
void selectionsort(int *arr , int n) {
    for(int i=0 ; i<n-2 ; i++) {
        int min = i;
        for(int j=i+1 ; j<n-1 ; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        if(min != i) {
            swap(a[min] , a[i]);
        }
    }

    
}

//insertion sort
void insertsort(int *arr , int n) {
    for(int i=1 ; i<n ; i++) {
        int temp = arr[i];
        int j = i-1;
    }

    while(j >= 0 && arr[j] > temp) {
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = temp;
}

//bubble sort
void bubblesort(int *arr , int n) {
    for(int i=0 ; i<n-1 ; i++) {
        for(int j = 0 ; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

//quick sort
void partition(int *arr , int low ; int high) {
    int pivot = low;
    int i = low;
    int j = high;

    while(i<j) {
        while(i<=high && arr[i] <= pivot) {
            i++;
        }

        while(j >= low && arr[j] > pivot) {
            j--;
        }
    }

    if(i<j) {
        swap(arr[i] , arr[j]);
    }
}

void quicksort(int *arr , int low ; int high) {
    if(low < high) {
        int pi = partition(arr , low , high);

        quicksort(arr , low , pi - 1);
        quicksort(arr , pi+1 , high);
    }
}

//merge sort
void mergesort(vector<int> &arr , int left , int right, int mid) {
    int n1 = mid-left+1;
    int n2 = right-mid;

    vector<int> l(n1) , R(n2);

    for(int i=0 ; i<n1 ; i++) {
        l[i] = arr[left+i];
    }
    for(int j=0 ; j<n2 ; j++) {
        R[i] = arr[mid+1+i];
    }

    int i=0 , j=0 , k= left;

    while(i<n1 && j<n2) {
        if(l[i] < R[i]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }

    }
    k++
}
