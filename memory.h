void myplan(int plan) {
  //taruh = drop
  if (plan == 1) {
    int a = 0;
    cp[0] = 0;
    cp[2] = 29;
    cp[3] = 33;

    // START HARUS MIRING !!

    c(a++, 0, hitam, 4,  8, 200,  130, 100, 0b1100000000000, atau, 50,  pid,  -80,  150,  100, hitam, 0b01100000000000, atau); //0
    c(a++, 0, hitam, 4,  20, 255, 450, 100, 0b1100000000000, atau, 50,  pid,  -80,   150,  100, hitam, 0b11000000000000, atau); //1
    c(a++, 0, hitam, 4,  10,  80, 450,  30, TM             , atau,  0, pickp,    0,     0,  3000, hitam, 0b01100000000000, atau); //2

    c(a++, 0, hitam, 4,  10,  80,   0,  80, TM             , atau,  0, free, -150,   150,  300, hitam, 0b11000000000000, atau); //3
    c(a++, 0, hitam, 4,  10, 100, 300,  80, 0b1100000000000, atau, 50,  pid,    0,   150,  260, putih, 0b00000000000011, atau); //4
    c(a++, 0, putih, 4,  20, 150, 350, 100, 0b1100000000011, atau, 50,  pid,  150,     -80,  150, putih, 0b00000000001100, atau); //5
    c(a++, 0, putih, 4,  20, 150, 300, 100, TM             , atau,  0, free,  250,   250,  50, hitam, 0b11000000000000, atau); //6
    c(a++, 0, hitam, 3,  40, 255, 600, 100, 0b1100000000000, atau, 50,  pid,  -80,   150,  100, hitam, 0b11000000000000, atau); //7
    c(a++, 0, hitam, 4,   10,  80, 550,  30, TM             , atau,  0, drop,    0,     0,  600, hitam, 0b00000000001100, atau); //8

    //    c(a++, 0, hitam, 3,   5,  80,   0,  80, TM             , atau,  0, free, -150,   150,  260, hitam, 0b11000000000000, atau); //9
    //    c(a++, 0, hitam, 4,  10, 100, 220, 100, 0b0000000000011, atau, 50,  pid,  150,   -80,  100, hitam, 0b00000000000110, atau); //10
    //    c(a++, 0, hitam, 4,  15, 150, 380, 100, 0b1100000000000, atau, 30,  pid,  -80,   150,   80, hitam, 0b11000000000000, atau); //11
    //    c(a++, 0, hitam, 4,  10, 100, 200,  80, TM             , atau, 30, free,  100,   110,   0, hitam, 0b11000000000000, atau); //12
    //    c(a++, 0, hitam, 4,  10, 200, 200,  80, TM             , atau, 30, free,  150,   160,   80, hitam, 0b11000000000000, atau); //13
    //    c(a++, 0, putih, 4,  10, 150, 230, 100, 0b0000000000011, atau, 30,  pid,  150,   0,  200, hitam, 0b00000000000110, atau); //14
    //    c(a++, 0, hitam, 4,  10,  80, 150, 100, 0b1100000000000, atau, 30,  pid,  -80,   150,  100, hitam, 0b00110000000000, atau); //15
    //    c(a++, 0, hitam, 4,  10, 100, 260,  30, TM             , atau,  0, pickp,   0,     0,  300, hitam, 0b11100000000111, atau); //16
    //
    //    c(a++, 0, hitam, 4,  10,   0,   0,   0, TM             , atau,  0, pid,   50,  -150,  100, hitam, 0b00000000000110, atau); //17
    //    c(a++, 0, hitam, 4,  30, 200, 300,  80, 0b0000000000011, atau, 50,  pid,  150,   -80,  100, hitam, 0b00000000110000, atau); //18
    //    c(a++, 0, hitam, 6,  25, 250, 400,  80, 0b1100000000011, atau, 30, free,  100,   100,  80, hitam, 0b11000000000000, atau); //19
    //    c(a++, 0, putih, 4,  10, 200, 200,  100, 0b1100000000000, atau, 30,  pid,  -80,   150,  100, putih, 0b11000000000000, atau); //20
    //    c(a++, 0, putih, 3,   5, 100, 200,  80, 0b0000000000011, atau, 30,  pid,  160,   -80,  100, putih, 0b00000000001100, atau); //21
    //    c(a++, 0, putih, 4,  10, 100, 250,  50, TM             , atau,  0, drop,    0,     0,  400, hitam, 0b11000000000000, atau); //22
    //
    //    c(a++, 0, putih, 4,  10,   0,   0,   0, TM             , atau,  0, free, -150,   150,  240, hitam, 0b11000000000000, atau); //23
    //    c(a++, 0, putih, 4,  10, 100, 420,  80, 0b1100000000000, atau, 30,  pid,  -80,   150,  100, putih, 0b11000000000000, atau); //24
    //    c(a++, 0, putih, 5,  20, 100, 200, 100, TM, atau,  0, free,  150,   150,  0, hitam, 0b11000000000000, atau); //25
    //    c(a++, 0, putih, 5,  20, 200, 280, 100, 0b1100000000011, atau,  0, free,  200,   200,  50, hitam, 0b11000000000000, atau); //26
    //    c(a++, 0, hitam, 4,  10, 200, 80, 100, 0b0000000000011, atau, 50,  pid,  150,   -80, 100, hitam, 0b00000000000110, atau); //27
    //    c(a++, 0, hitam, 5,  20, 150, 350, 100, 0b1100000000011, atau, 50,  pid,  -80,   150,   100, hitam, 0b11000000000000, atau); //28
    //    c(a++, 0, hitam, 4,  10, 200, 230, 100, TM             , atau,  0, free,  150,   150,    0, hitam, 0b11000000000000, atau); //29 (CP 2)
    //    c(a++, 0, hitam, 4,  10,  80, 300,  30, TM             , atau,  0, pickp,   0,     0,  1000, hitam, 0b10000000000001, atau); //30
    //
    //    c(a++, 0, hitam, 4,  10,   0,   0,   0, TM             , atau,  0, pid, 150,   -150,  200, hitam, 0b00000000001100, atau); //31
    //    c(a++, 0, hitam, 5,  20, 200, 480,  100, 0b0000000000011, atau, 50,  pid,  150,   -80,  100, hitam, 0b00000000001100, atau); //32
    //    c(a++, 0, hitam, 4,  10, 150, 300, 100, TM             , atau,  0, free,  150,   150,    0, hitam, 0b11000000000000, atau); //33 (CP 3)
    //    c(a++, 0, hitam, 4,  10,  100, 450,  30, TM             , atau,  0, drop,    0,     0,  500, hitam, 0b11000000000000, atau); //34
    //
    //    c(a++, 0, hitam, 4,  10,   0,   0,   0, TM             , atau,  0, free, -150,   150,  240, hitam, 0b11000000000000, atau); //35
    //    c(a++, 0, hitam, 4,  10, 150, 100, 100, 0b1100000000000, atau,  0,  pid,  -80,   150,  100, hitam, 0b11000000000000, atau); //36
    //    c(a++, 0, hitam, 4,  10,  80, 220,  80, 0b0000000000011, atau, 30,  pid,  150,   -80,  100, hitam, 0b00000000001100, atau); //37
    //    c(a++, 0, hitam, 4,  10, 200, 300,  100, 0b1100000000011, atau, 30, free,  200,   200,  100, hitam, 0b11000000000000, atau); //38
    //    c(a++, 0, putih, 3,  15, 200, 300, 100, 0b1100000000000, atau, 50,  pid,  -80,   150,  100, putih, 0b00110000000000, atau); //39
    //    c(a++, 0, putih, 3,  15, 200, 300,  80, 0b1100000000000, atau,  0, free,  -80,   150,    0, hitam, 0b11000000000000, atau); //40
  }
  if (plan == 2) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0

  }
  if (plan == 3) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0
  }
  if (plan == 4) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0

  }
  if (plan == 5) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0
  }

  if (plan == 6) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0
  }
  if (plan == 7) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0
  }
  if (plan == 8) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0
  }
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
