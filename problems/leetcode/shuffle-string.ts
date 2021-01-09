function restoreString(s: string, indices: number[]): string {
    const items = indices.map((indice, index) => [indice, s[index]])
    
    items.sort((a, b) => {
        if(a[0] < b[0]) return -1
        else if(a[0] > b[0]) return 1
        return 0
    })

    return items.map(item => item[1]).join('')
};
