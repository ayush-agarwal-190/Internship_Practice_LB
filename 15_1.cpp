
bool ispossible(vector<int> arr,int n,int m,int mid )
{
    int studentsCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++)
    {
        if(pagesum+arr[i]<=mid)
          pageSum+=arr[i];
          else
          {
          studentsCount++;
           if(studentsCount>m || arr[i]>mid)
            return false;

          }
          pagesum=arr[i];

    }
    return true;
}

int allocateBooks(vector<int> arr,intn,int m)
{
    int s=0
    for(int i=0;i<n;i++)
    sum+=arr[i];
    e=sum;


    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(ispossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        s=mid+1;

        mid=s+(e-s)/2;
    }
    return ans;

}