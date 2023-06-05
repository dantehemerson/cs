function groupAnagrams(strs: string[]): string[][] {
    const byAnagram: Record<string, string[]> = {}

    strs.forEach(str => {
        const key: string = str.split('').sort().join('')
        
        if (!byAnagram[key]) { 
            byAnagram[key] = [str]
        } else {
            byAnagram[key].push(str)
        }
    })

    return Object.values(byAnagram)
};
