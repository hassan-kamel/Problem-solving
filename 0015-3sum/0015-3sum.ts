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
    const set = new Set<number>();
    while (i < j) {
        if (set.has(nums[i])) {
            i++;
            continue;
        }
        else if (set.has(nums[j])) {
            j--;
            continue;
        }
        const sum = nums[i] + nums[j];
        if (sum > target) j--;
        else if (sum < target) i++;
        else {
            result.push([-target, nums[i], nums[j]]);
            set.add(nums[i]);
            set.add(nums[j]);
            i++;
            j--;
        };
    }

    return result;
}