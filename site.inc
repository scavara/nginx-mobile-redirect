set $mobile_rewrite 0;

if ($is_mobile) {
    set $mobile_rewrite perform;
}

if ($mobile_rewrite = perform) {
    rewrite ^ https://mobile.site.cld$request_uri? redirect;
    break;
}

location ~some/url/to/exclude {
  if ($is_mobile_default) {
  #do something
  }
  #do something else
}

