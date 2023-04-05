template<typename T1, typename T2>
T2 max (T1 a, T2 b)
{
  // if b < a then yield a else yield b
  return  b < a ? a : b;
}
