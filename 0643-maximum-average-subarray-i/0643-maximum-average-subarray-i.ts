function findMaxAverage(nums: number[], k: number): number {
    let maxS = nums.slice(0, k).reduce((acc, curr) => acc + curr, 0), curr = maxS;
    for (let i = k; i < nums.length; i++) {
        curr += nums[i] - nums[i - k];

        maxS = Math.max(curr, maxS)

    }
    return maxS / k;
};