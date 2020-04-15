abstract class Creator {
  public abstract factoryMethod(): Product


  public someOperation(): string {
    const product = this.factoryMethod()

    return `Creator: The same creator's code has just worked with ${product.operation()}`
  }
}


class ConcreteCreator1 extends Creator {
  public factoryMethod(): Product {
    return new ConcreteProduct1()
  }

  public otherMethod(): string {
    return `IT depends`
  }
}

class ConcreteCreator2 extends Creator {
  public factoryMethod(): Product {
    return new ConcreteProduct2()
  }
}

interface Product {
  operation(): string
}

class ConcreteProduct1 implements Product {
  public operation(): string {
      return '{Result of the ConcreteProduct1}';
  }
}

class ConcreteProduct2 implements Product {
  public operation(): string {
      return '{Result of the ConcreteProduct2}';
  }
}


function clientCode(creator: Creator) {
  console.log(`Client: I'm not aware of the creator's class, but it still works.`)
  creator.someOperation()
}

console.log('App: Launched with the ConcreteCreator1.');
clientCode(new ConcreteCreator1());
console.log('');

console.log('App: Launched with the ConcreteCreator2.');
clientCode(new ConcreteCreator2());
