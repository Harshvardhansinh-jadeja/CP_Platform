class Solution {
    public static void merge(int arr1[],int arr2[],int arr3[],int n1,int n2)
    {
        int i=0,j=0,k=0;
        while(i<n1 && j<n2)
        {
            if(arr1[i]<arr2[j])
                arr3[k++]=arr1[i++];
            else
                arr3[k++]=arr2[j++];
        }
        while(i<n1)
            arr3[k++]=arr1[i++];
        while(j<n2)
            arr3[k++]=arr2[j++];
    }
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n1=nums1.length;
        int n2=nums2.length;
        int arr[]=new int[n1+n2];
        merge(nums1,nums2,arr,n1,n2);
        double median;
        int l=arr.length;
        int mid=l/2;
        if(l%2==0)
        {
            median=(arr[mid-1]+arr[mid])/2.0;
            return median;
        }
        else
            median=arr[mid];
        return median;
    }
}