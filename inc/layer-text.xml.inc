<Style name="locality">
    <Rule>
        <Filter>[place] = 'locality'</Filter>
        &maxscale_zoom16;
        <TextSymbolizer name="name" fontset_name="bold-fonts" size="10" fill="#787878" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="20" min_distance="10" line_spacing="2"/>
    </Rule>
</Style>
<Style name="neighborhood">
    <Rule>
        <Filter>[place] = 'village' or [place] = 'hamlet'</Filter>
        &maxscale_zoom12;
        &minscale_zoom12;
        <TextSymbolizer name="name" fontset_name="bold-fonts" size="10" fill="#787878" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="20" min_distance="50" line_spacing="2"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'village' or [place] = 'hamlet'</Filter>
        &maxscale_zoom13;
        &minscale_zoom14;
        <TextSymbolizer name="name" fontset_name="bold-fonts" size="10" fill="#787878" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="20" min_distance="50" line_spacing="2"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'village' or [place] = 'hamlet'</Filter>
        &maxscale_zoom15;
        &minscale_zoom16;
        <TextSymbolizer name="name" fontset_name="bold-fonts" size="10" fill="#787878" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="20" min_distance="100" line_spacing="2"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'village' or [place] = 'hamlet'</Filter>
        &maxscale_zoom17;
        <TextSymbolizer name="name" fontset_name="bold-fonts" size="12" fill="#787878" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="20" text_convert="toupper" min_distance="100" line_spacing="2" character_spacing="5"/>
    </Rule>
</Style>
<Style name="city 4">
    <Rule>
        <Filter>[place] = 'suburb'</Filter>
        &maxscale_zoom9;
        &minscale_zoom10;
        <TextSymbolizer name="name" fontset_name="bold-fonts" size="10" fill="#6e6e6e" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="20" min_distance="10" line_spacing="2"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'suburb'</Filter>
        &maxscale_zoom11;
        &minscale_zoom13;
        <TextSymbolizer name="name" fontset_name="bold-fonts" size="12" fill="#6e6e6e" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="20" min_distance="10" line_spacing="2"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'suburb'</Filter>
        &maxscale_zoom14;
        &minscale_zoom17;
        <TextSymbolizer name="name" fontset_name="bold-fonts" size="12" fill="#6e6e6e" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="20" text_convert="toupper" min_distance="10" line_spacing="2" character_spacing="5"/>
    </Rule>
</Style>
<Style name="city 3">
    <Rule>
        <Filter>[place] = 'small_town'</Filter>
        &maxscale_zoom6;
        &minscale_zoom10;
        <ShieldSymbolizer name="name" fontset_name="bold-fonts" size="10" fill="#2b2b2b" dy="-17" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="0" line_spacing="2" file="&symbols;/small-city.png" type="png" width="8" height="8" min_distance="10"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'small_town'</Filter>
        &maxscale_zoom11;
        &minscale_zoom15;
        <ShieldSymbolizer name="name" fontset_name="bold-fonts" size="12" fill="#2b2b2b" dy="-17" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="0" line_spacing="2" file="&symbols;/small-city.png" type="png" width="8" height="8" min_distance="10"/>
    </Rule>
</Style>
<Style name="city 2">
    <Rule>
        <Filter>[place] = 'town' or [place]='large_town'</Filter>
        &maxscale_zoom8;
        &minscale_zoom8;
        <ShieldSymbolizer name="name" fontset_name="bold-fonts" size="8" fill="#2b2b2b" dy="-11" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="0" line_spacing="2" file="&symbols;/small-city.png" type="png" width="8" height="8" min_distance="10"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'town' or [place]='large_town'</Filter>
        &maxscale_zoom9;
        &minscale_zoom10;
        <ShieldSymbolizer name="name" fontset_name="bold-fonts" size="9" fill="#2b2b2b" dy="-11" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="0" line_spacing="2" file="&symbols;/small-city.png" type="png" width="8" height="8" min_distance="10"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'town' or [place]='large_town'</Filter>
        &maxscale_zoom11;
        &minscale_zoom15;
        <ShieldSymbolizer name="name" fontset_name="bold-fonts" size="12" fill="#2b2b2b" dy="-13" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="0" line_spacing="2" file="&symbols;/small-city.png" type="png" width="8" height="8" min_distance="10"/>
    </Rule>
</Style>
<Style name="city 1">
    <Rule>
        <Filter>[place] = 'city' or [place]='metropolis'</Filter>
        &maxscale_zoom6;
        &minscale_zoom7;
        <ShieldSymbolizer name="name" fontset_name="bold-fonts" size="11" fill="#2b2b2b" dy="-12" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="0" line_spacing="2" file="&symbols;/small-city.png" type="png" width="10" height="8" min_distance="25"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'city' or [place]='metropolis'</Filter>
        &maxscale_zoom8;
        &minscale_zoom9;
        <ShieldSymbolizer name="name" fontset_name="bold-fonts" size="13" fill="#2b2b2b" dy="-13" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="0" line_spacing="2" file="&symbols;/large-city.png" type="png" width="10" height="10" min_distance="20"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'city' or [place]='metropolis'</Filter>
        &maxscale_zoom10;
        &minscale_zoom13;
        <ShieldSymbolizer name="name" fontset_name="bold-fonts" size="14" fill="#2b2b2b" dy="-15" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="0" line_spacing="2" file="&symbols;/large-city.png" type="png" width="10" height="10" min_distance="5"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'city' or [place]='metropolis'</Filter>
        &maxscale_zoom14;
        &minscale_zoom15;
        <ShieldSymbolizer name="name" fontset_name="bold-fonts" size="16" fill="#2b2b2b" dy="-17" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="0" line_spacing="2" character_spacing="5" text_convert="toupper" file="&symbols;/large-city.png" type="png" width="10" height="10" min_distance="20"/>
    </Rule>
</Style>
<Style name="capital">
    <Rule>
        <Filter>[place] = 'city' or [place]='metropolis'</Filter>
        &maxscale_zoom6;
        &minscale_zoom6;
        <ShieldSymbolizer name="name" fontset_name="bold-fonts" size="13" fill="#2b2b2b" dy="-17" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="0" line_spacing="2" file="&symbols;/national-capital.png" type="png" width="14" height="14" min_distance="25"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'city' or [place]='metropolis'</Filter>
        &maxscale_zoom7;
        &minscale_zoom13;
        <ShieldSymbolizer name="name" fontset_name="bold-fonts" size="15" fill="#2b2b2b" dy="-17" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="0" line_spacing="2" file="&symbols;/national-capital.png" type="png" width="14" height="14"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'city' or [place]='metropolis'</Filter>
        &maxscale_zoom14;
        &minscale_zoom15;
        <ShieldSymbolizer name="name" fontset_name="bold-fonts" size="15" fill="#2b2b2b" dy="-17" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="0" line_spacing="2" character_spacing="5" text_convert="toupper" file="&symbols;/national-capital.png" type="png" width="14" height="14"/>
    </Rule>
</Style>
<Style name="state">
    <Rule>
        <Filter>[place] = 'state'</Filter>
        &maxscale_zoom5;
        &minscale_zoom10;
        <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#805433" dy="0" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="20" text_convert="toupper" min_distance="20"/>
    </Rule>
</Style>
<Style name="county">
    <Rule>
        <Filter>[place] = 'county'</Filter>
        &maxscale_zoom10;
        &minscale_zoom10;
        <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#787878" dy="0" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="20" text_convert="toupper" line_spacing="2" character_spacing="2"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'county'</Filter>
        &maxscale_zoom11;
        &minscale_zoom11;
        <TextSymbolizer name="name" fontset_name="book-fonts" size="12" fill="#5a5a5a" dy="0" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="20" text_convert="toupper" line_spacing="2" character_spacing="2"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'county'</Filter>
        &maxscale_zoom12;
        &minscale_zoom12;
        <TextSymbolizer name="name" fontset_name="book-fonts" size="14" fill="#5a5a5a" dy="0" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="20" text_convert="toupper" line_spacing="2" character_spacing="2"/>
    </Rule>

</Style>
<Style name="country">
    <Rule>
        <Filter>[place] = 'country'</Filter>
        &maxscale_zoom3;
        &minscale_zoom3;
        <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="#918378" dy="0" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="30" min_distance="20" line_spacing="4"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'country'</Filter>
        &maxscale_zoom4;
        &minscale_zoom5;
        <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="#918378" dy="0" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="30" line_spacing="4"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'country'</Filter>
        &maxscale_zoom6;
        &minscale_zoom7;
        <TextSymbolizer name="name" fontset_name="book-fonts" size="12" fill="#918378" dy="0" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="30" text_convert="toupper" line_spacing="4"/>
    </Rule>
</Style>
<Style name="continent">
    <Rule>
        <Filter>[place] = 'continent'</Filter>
        &maxscale_zoom1;
        &minscale_zoom1;
        <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="#918378" dy="0" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="30" line_spacing="4" text_convert="toupper"/>
    </Rule>
    <Rule>
        <Filter>[place] = 'continent'</Filter>
        &maxscale_zoom2;
        &minscale_zoom5;
        <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="#918378" dy="0" halo_radius="2" halo_fill="rgba(255,255,255,0.25)" wrap_width="30" character_spacing="5" line_spacing="10" text_convert="toupper"/>
    </Rule>
</Style>
<Layer name="placenames-large" status="on" srs="&osm2pgsql_projection;">
  <StyleName>continent</StyleName>
  <StyleName>country</StyleName>
  <StyleName>county</StyleName>
  <StyleName>state</StyleName>
  <StyleName>capital</StyleName>
  <Datasource>
    <Parameter name="table">
      (select way,place,replace(replace(name,'(',''),')','') as name,ref
      from &prefix;_point
      where place in ('continent','country','county','state')
      or (place in ('city','metropolis') and capital='yes')
    ) as placenames</Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
<Layer name="placenames-medium" status="on" srs="&osm2pgsql_projection;">
    <StyleName>city 1</StyleName>
    <StyleName>city 2</StyleName>
    <StyleName>city 3</StyleName>
    <Datasource>
      <Parameter name="table">
        (select way,place,name
          from &prefix;_point
          where place in ('city','metropolis','town','large_town','small_town')
          and (capital is null or capital&lt;&gt;'yes')
        ) as placenames
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="placenames-small" status="on" srs="&osm2pgsql_projection;">
    <StyleName>city 4</StyleName>
    <StyleName>neighborhood</StyleName>
    <StyleName>locality</StyleName>
    <Datasource>
      <Parameter name="table">
        (select way,place,name
          from &prefix;_point
          where place in ('suburb','village','large_village','hamlet','locality')
        ) as placenames
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
