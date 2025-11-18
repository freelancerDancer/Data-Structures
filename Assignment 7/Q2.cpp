void improvedSelectionSort(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int minIndex = left;
        int maxIndex = right;

        // Make sure minIndex and maxIndex point to correct initial values
        if (arr[minIndex] > arr[maxIndex]) {
            swap(arr[minIndex], arr[maxIndex]);
        }

        // Find min and max in the remaining unsorted region
        for (int i = left + 1; i < right; i++) {
            if (arr[i] < arr[minIndex])
                minIndex = i;
            else if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }

        // Place the minimum at the left
        swap(arr[left], arr[minIndex]);

        // If maxIndex was pointing to left, after swapping it moved to minIndex
        if (maxIndex == left) {
            maxIndex = minIndex;
        }

        // Place the maximum at the right
        swap(arr[right], arr[maxIndex]);

        left++;
        right--;
    }
}