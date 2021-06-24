function sortSentence(s: string): string {
  const sentences = s.split(' ');
  
  const arr = new Array(sentences.length);
  
  sentences.forEach(sentence => {
    const position = parseInt(sentence[sentence.length - 1], 10) - 1;
    arr[position] = sentence.substr(0, sentence.length - 1);
  });
  
  return arr.join(' ');
};
