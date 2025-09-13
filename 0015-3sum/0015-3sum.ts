function threeSum(nums: number[]): number[][] {
    nums = nums.sort((a, b) => a - b);
    const result: number[][] = [];
    nums.forEach((num, idx) => {
        if (num > 0 || !(idx > 0 && num == nums[idx - 1])) {
            result.push(...twoSum(nums.slice(idx + 1), -num));
        }
    })

    return result;
};

function twoSum(nums: number[], target: number): number[][] {
    let i = 0, j = nums.length - 1;
    const result: number[][] = [];
    while (i < j) {
        const sum = nums[i] + nums[j];
        if (sum > target) j--;
        else if (sum < target) i++;
        else {
            result.push([-target, nums[i], nums[j]]);
            while (i < j && nums[i] === nums[i + 1]) i++;
            while (i < j && nums[j] === nums[j - 1]) j--;

            i++;
            j--;
        };
    }

    return result;
}