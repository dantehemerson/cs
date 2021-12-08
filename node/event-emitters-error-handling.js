const { EventEmitter } = require('events')

const ee1 = new EventEmitter({ captureRejections: true });

ee1.on('something', async (value) => {
  throw new Error('kaboom');
});

ee1.on('error', error => {
  console.log('Carritooooos', error)
})


// ee1.emit('something')

const ee2 = new EventEmitter({ captureRejections: true });
ee2.on('something', async (value) => {
  throw new Error('kaboom');
});

ee2[Symbol.for('nodejs.rejection')] = console.log;
ee2.emit('something')
