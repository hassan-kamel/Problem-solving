function maxOperations(nums: number[], k: number): number {
    let comp = new Map(), maxO = 0;
    for (let i = 0; i < nums.length; i++) {
        if (comp.has(k - nums[i])) {
            maxO++;
            comp.set(k - nums[i], comp.get(k - nums[i]) - 1)
            if (comp.get(k - nums[i]) == 0) comp.delete(k - nums[i])
        } else {
            comp.set(nums[i], (comp.get(nums[i]) || 0) + 1)
        }
    }

    return maxO;
};