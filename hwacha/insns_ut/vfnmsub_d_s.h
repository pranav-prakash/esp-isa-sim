require_fp;
softfloat_roundingMode = VRM;
WRITE_FRD(f64_mulAdd(f32_to_f64(FRS1) ^ (uint64_t)INT64_MIN, f32_to_f64(FRS2), f32_to_f64(FRS3)));
set_fp_exceptions;