typedef void (*callback_func_t)(int*);

void loopcll_(int* n, callback_func_t callback);
#define loopcll loopcll_

