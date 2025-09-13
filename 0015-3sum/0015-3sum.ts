function threeSum(nums: number[]): number[][] {
    nums = nums.sort((a, b) => a - b);
    const result: number[][] = [];
    const set = new Set<number>();
    nums.forEach((num, idx) => {
        if (!set.has(num) || num > 0) {
            result.push(...twoSum(nums.slice(idx + 1), -num));
            set.add(num);
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