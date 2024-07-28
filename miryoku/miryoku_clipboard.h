// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#if defined (MIRYOKU_CLIPBOARD_FUN)
  #define U_RDO &kp K_AGAIN
  #define U_PST &kp K_PASTE
  #define U_CPY &kp K_COPY
  #define U_CUT &kp K_CUT
  #define U_UND &kp K_UNDO

  #define UE_RDO K_AGAIN
  #define UE_PST K_PASTE
  #define UE_CPY K_COPY
  #define UE_CUT K_CUT
  #define UE_UND K_UNDO
#elif defined (MIRYOKU_CLIPBOARD_MAC)
  #define U_RDO &kp LS(LG(Z))
  #define U_PST &kp LG(V)
  #define U_CPY &kp LG(C)
  #define U_CUT &kp LG(X)
  #define U_UND &kp LG(Z)

  #define UE_RDO LS(LG(Z))
  #define UE_PST LG(V)
  #define UE_CPY LG(C)
  #define UE_CUT LG(X)
  #define UE_UND LG(Z)
#elif defined (MIRYOKU_CLIPBOARD_WIN)
  #define U_RDO &kp LC(Y)
  #define U_PST &kp LC(V)
  #define U_CPY &kp LC(C)
  #define U_CUT &kp LC(X)
  #define U_UND &kp LC(Z)

  #define UE_RDO LC(Y)
  #define UE_PST LC(V)
  #define UE_CPY LC(C)
  #define UE_CUT LC(X)
  #define UE_UND LC(Z)
#else
  #define U_RDO &kp K_AGAIN
  #define U_PST &kp LS(INS)
  #define U_CPY &kp LC(INS)
  #define U_CUT &kp LS(DEL)
  #define U_UND &kp K_UNDO

  #define UE_RDO K_AGAIN
  #define UE_PST LS(INS)
  #define UE_CPY LC(INS)
  #define UE_CUT LS(DEL)
  #define UE_UND K_UNDO
#endif
