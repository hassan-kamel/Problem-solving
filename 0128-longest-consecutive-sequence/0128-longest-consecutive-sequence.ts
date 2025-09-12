function longestConsecutive(nums: number[]): number {
    let sset = new Set(nums);
    let maxLen = 0;
    for(let num of sset){
        // check its start of the sequence
        if(!sset.has(num-1)){
            let len = 0;
            while(sset.has(num+len)){
                len += 1;
            }
            maxLen = Math.max(maxLen, len);
        }
    }
    return maxLen;

};