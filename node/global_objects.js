
/** The filename of the code being executed. (absolute path) */
console.log(__filename);

/** The name of the directory that the currently executing script resides in. (absolute path) */
console.log(__dirname);

module.exports.dale = function() { console.log('hola') }

/**A reference to the current module. In particular module.exports is used for defining what a module exports and makes available through require(). */
console.log(module);
/**
 *
Module {
  id: '.',
  path: '/home/dantehemerson/Documents/repos/cs/node',
  exports: { dale: [Function] },
  parent: null,
  filename: '/home/dantehemerson/Documents/repos/cs/node/global_objects.js',
  loaded: false,
  children: [],
  paths: [
    '/home/dantehemerson/Documents/repos/cs/node/node_modules',
    '/home/dantehemerson/Documents/repos/cs/node_modules',
    '/home/dantehemerson/Documents/repos/node_modules',
    '/home/dantehemerson/Documents/node_modules',
    '/home/dantehemerson/node_modules',
    '/home/node_modules',
    '/node_modules'
  ]
}
*/

/** A reference to the module.exports that is shorter to type.
 */
console.log('exports', exports);
/**
 * exports { dale: [Function] }
 */


console.log(process);
