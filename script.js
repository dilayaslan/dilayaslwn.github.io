// Geçiş butonuna tıklanması durumunda kartın dönüşümünü tetikle
document.getElementById('flipButton').addEventListener('click', function() {
    var card = document.getElementById('card');
    card.classList.toggle('flipped'); // 'flipped' sınıfını ekle veya kaldır
});

const name = "Dilay Aslan";


// Adınızı HTML'ye ekliyoruz
document.getElementById('name').textContent = name;


    