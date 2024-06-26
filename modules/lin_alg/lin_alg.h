#ifndef LIN_ALG_H
#define LIN_ALG_H

#include "common.h"

#include <math.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

float lin_alg_v_norm(const float vector[DIM2]);

int lin_alg_m_m_mul(float m_a[DIM2][DIM2], float m_b[DIM2][DIM2], float m_out[DIM2][DIM2]);

#endif /* LIN_ALG_H */
