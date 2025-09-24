function findMaxAverage(nums: number[], k: number): number {
    let maxS = nums.slice(0, k).reduce((acc, curr) => acc + curr, 0), curr = maxS;
    console.log(maxS)
    for (let i = k; i < nums.length; i++) {
        curr += nums[i];
        curr -= nums[i - k];

        maxS = curr / k > maxS / k ? curr : maxS;

    }

    return maxS / k;
};