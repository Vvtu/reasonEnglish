module Impl = (T: {type t;}) => {
  type t_window = T.t;
  [@bs.send.pipe: t_window]
  external getComputedStyle : Dom.element => Dom.cssStyleDeclaration = "";
};