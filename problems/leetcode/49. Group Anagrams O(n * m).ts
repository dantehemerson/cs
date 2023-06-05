function groupAnagrams(strs: string[]): string[][] {
    const byAnagram: Record<string, string[]> = {}

    strs.forEach(str => {

        // Sorting: O(m * log m) 
        // const key: string = str.split('').sort().join('')


        // O(m)
        const counter = Array(26).fill(0)
        for (const c of str) {
            counter[c.charCodeAt(0) - 97]++;
        }
        const key = counter.join('-');

        
        if (!byAnagram[key]) { 
            byAnagram[key] = [str]
        } else {
            byAnagram[key].push(str)
        }
    })

    return Object.values(byAnagram)
};
