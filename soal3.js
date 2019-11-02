function print_picture(size) {
  const star = ' * ';
  const line = ' = ';

  // bukan bilangan ganjil
  if(size % 2 == 0) return;

  // buat header berada di tengah
  console.log(' '.repeat(size / 2) + '--- panjang ---' + ' '.repeat(size / 2));

  for(var row = 0;  < size; row++) {
    // bintang di tengah
    if(Math.floor(size / 2) === row) {
      console.log(star.repeat(size));
    }else {
      // bintang - garis - bintang
      console.log(star+line.repeat(size - 2)+star);
    }
  }
}