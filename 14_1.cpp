int getpivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    
    while(s<e)
    {
        if(arr[mid]>=arr[0])
          s=mid+1;
        else
         e=mid;

        mid=s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int low, int high, int key)
{
    if (high < low)
        return -1;
 
    int mid = (low + high) / 2;
    if (key == arr[mid])
        return mid;
 
    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);
 
    return binarySearch(arr, low, (mid - 1), key);
}
 
// Function to get pivot. For array 3, 4, 5, 6, 1, 2
// it returns 3 (index of 6)
int findPivot(int arr[], int low, int high)
{
    // Base cases
    if (high < low)
        return -1;
    if (high == low)
        return low;
 
    // low + (high - low)/2;
    int mid = (low + high) / 2;
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;
 
    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);
 
    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);
 
    return findPivot(arr, mid + 1, high);
}
 
// Searches an element key in a pivoted
// sorted array arr[] of size n
int pivotedBinarySearch(int arr[], int n, int key)
{
    int pivot = findPivot(arr, 0, n - 1);
 
    // If we didn't find a pivot,
    // then array is not rotated at all
    if (pivot == -1)
        return binarySearch(arr, 0, n - 1, key);
 
    // If we found a pivot, then first compare with pivot
    // and then search in two subarrays around pivot
    if (arr[pivot] == key)
        return pivot;
 
    if (arr[0] <= key)
        return binarySearch(arr, 0, pivot - 1, key);
 
    return binarySearch(arr, pivot + 1, n - 1, key);
}
 

 int binarySearch(int n)
 {
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        int square=mid*mid;

        if(square==n)
        return mid;

        if(square<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
         e= mid-1;
        mid=s+(e-s)/2; 
    }
    return ans;
 }


 double setPrecision(int n,int precision ,int tempSol)
 {
    double factor=1;
    double ans=tempSol;

    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        for(double j=ans;j*j<n;j+=factor)
          ans=j;
    }
    return ans;
 }