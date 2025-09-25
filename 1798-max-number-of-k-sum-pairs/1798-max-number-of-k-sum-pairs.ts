function maxOperations(nums: number[], k: number): number {
    nums.sort((a, b) => a - b);

    let l = 0, r = nums.length - 1, maxO = 0;
    while (l < r) {
        let sum = nums[l] + nums[r];
        if (sum > k) r--;
        else if (sum < k) l++
        else {
            maxO++;
            l++;
            r--;
        }
    }

    return maxO;
};