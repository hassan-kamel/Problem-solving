function trap(heights: number[]): number {
    let trappedWater = 0, maxL = 0;

    heights.forEach((h, idx) => {
        let maxR = 0;
        let right = idx + 1;
        while (right < heights.length) {
            maxR = Math.max(maxR, heights[right]);
            right++;
        }

        trappedWater += (Math.max(0, Math.min(maxR, maxL) - h));
        maxL = Math.max(maxL, h);
    })

    return trappedWater;
};