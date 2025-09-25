function maxOperations(nums: number[], k: number): number {
    let comp = new Map(), maxO = 0;
    for (let i = 0; i < nums.length; i++) {
        let curr = k - nums[i];
        if (comp.has(curr)) {
            maxO++;
            comp.set(curr, comp.get(curr) - 1)
            if (comp.get(curr) == 0) comp.delete(curr)
        } else {
            comp.set(nums[i], (comp.get(nums[i]) || 0) + 1)
        }
    }

    return maxO;
};