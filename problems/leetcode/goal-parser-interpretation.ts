const parseValues = {
    "G": "G",
    "()": "o",
    "(al)": "al"
}

function interpret(command: string): string {
    return command.replace(new RegExp("G|(\\(\\))|(\\(al\\))", "g"), v => {
        return parseValues[v] ?? v
    })
}
