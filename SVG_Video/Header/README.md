
***

# SVG Video - Header

The header in the SVG video format takes up a slight bit extra, but can massively impact the quality and performance of the format.

In the header, a definition can be given for the compression method, along with steps for this method (it can link to a library for this as well) and also the definition of the encoding.

The header contains XML/SVG syntax. It is a requirement for the SVG video format.

Some good uses of this is for looping videos (videos that loop a short/long segment repeatedly) with header data, you can define that this one clip is going to be repeat, and then you only need to account for 1 instance of it. You can then tell the video player to repeat the instance `x` times.

You can define any method of compression, as long as you correctly define its libraries in the header. The header can be a separate file, but it is recommended to embed it into the SVG video file.

***
