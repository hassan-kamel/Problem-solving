function longestOnes(nums: number[], k: number): number {
    let long = 0, r = 0, l = 0, curr = 0;

    while (r < nums.length) {
        curr += nums[r];
        if (r - l + 1 - curr <= k)
            long = Math.max(long, r - l + 1);
        else {
            curr -= nums[l];
            l++;
        }
        r++;

    }

    return long;
};