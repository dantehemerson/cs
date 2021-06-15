function numUniqueEmails(emails: string[]): number {
  const ammounter = new Set<string>();

  for(const email of emails) {
    let atIndex = email.length;
    const sint = email.replace(/(\+.+@)|(\.)|(@)/g, (val, plus, dot, at, offset) => {

      if(dot && offset < atIndex) {
        return '';
      } else if(plus) {
        atIndex = offset + plus.length;
        return '@';
      } else if(at) {
        atIndex = offset;
      }
      return val;
    });

    ammounter.add(sint);
  }

  return ammounter.size;
}
