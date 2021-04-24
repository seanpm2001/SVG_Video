onload="rotate(evt)">

<script type="text/ecmascript">
  function rotate(evt) {
   var object = evt.target.ownerDocument.getElementById('rot');
   setInterval(function () {
     var now          = new Date();
     var milliseconds = now.getTime() % 1000;
     var degrees      = milliseconds * 0.36; // 360 degrees in 1000 ms
     object.setAttribute('transform', 'rotate(' + degrees + ')');
    }, 20);
  }
 </script>
