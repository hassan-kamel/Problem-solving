function maxArea(height: number[]): number {
    let i = 0, j = height.length - 1;
    let maxA = 0;

    while (i < j) {
        let minH = Math.min(height[i], height[j]);
        let currA = minH * (j - i);
        maxA = Math.max(currA, maxA);

        if (height[i] > height[j]) j--;
        else i++;
    }

    return maxA;
};