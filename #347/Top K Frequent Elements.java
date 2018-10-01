class Solution {
    public List<Integer> topKFrequent(int[] nums, int k) {
        int[] map = new int[10000];
        int max = -1;
        List<Integer> res = new ArrayList<>();
        if(nums==null || nums.length==0) return res;
        for(int i = 0; i < nums.length; i++){
            map[nums[i]+5000]++;
            max = Math.max(nums[i]+5000,max);
        }
        
        List<Integer>[] arr = new List[max+1];
        
        for(int i = 0; i < max+1; i++){
            if(map[i]!=0){
                if(arr[map[i]] == null){
                    arr[map[i]] = new ArrayList<>();
                }
                arr[map[i]].add(i-5000);
            }
        }
        int count = 0;
        for(int i = max; i >= 0; i--){
            if(count==k) break;
            if(arr[i]!=null){
                res.addAll(arr[i]);
                count+=arr[i].size();
            }
        }
        return res;
    }
}