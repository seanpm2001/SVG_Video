onload="init()">
   <script>
    var object;
   
    function init() {
      object = document.getElementById('rot');     
      window.requestAnimationFrame(rotate);
    }
   
    function rotate(timestamp) {
      var milliseconds = timestamp % 1000;
      var degrees      = milliseconds * 0.36; // 360 degrees in 1000 ms
      object.setAttribute('transform', 'rotate(' + degrees + ')');
      window.requestAnimationFrame(rotate);
}
