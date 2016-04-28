var imported = document.createElement('script');
imported.src = 'http://maps.google.com/maps/api/js?sensor=false';
document.head.appendChild(imported);

var map;
var geocoder;

function loadMap() {
    var latitude = Drupal.settings.grabmap.latitude;
    var longitude = Drupal.settings.grabmap.longitude;
    var latlng = new google.maps.LatLng(latitude, longitude);
    var feature = {
        zoom: 5,
        center: latlng,
        mapTypeId: google.maps.MapTypeId.ROADMAP
    };
    map = new google.maps.Map(document.getElementById("map_canvas"), feature);
    geocoder = new google.maps.Geocoder();
    var marker = new google.maps.Marker({
        position: latlng,
        map: map,
        title: "Test for Location"
    });
}
