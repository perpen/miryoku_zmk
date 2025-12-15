#define MIRYOKU_KLUDGE_THUMBCOMBOS

#define HENRI_COMBO_MACRO(NAME, LAYER, POSITIONS, BINDING) \
henri_combos_ ## LAYER ## _ ## NAME { \
  layers = <LAYER>; \
  key-positions = <POSITIONS>; \
  bindings = <BINDING>; \
  timeout-ms = <50>; \
};
