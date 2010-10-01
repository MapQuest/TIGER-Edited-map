<Style name="tiger">
  <Rule>
    <Filter>[is_tiger] = 'yes'</Filter>
    &maxscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">red</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'no'</Filter>
    &maxscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">green</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
  </Rule>
</Style>


<Layer name="roads" srs="&srs900913;">
  <StyleName>tiger</StyleName>
  <Datasource>
    <Parameter name="table">
      (select way,
        (case when osm_uid = '7168' -- DaveHansenTiger
                    and osm_timestamp::timestamp &gt;= '2007-09-01'::timestamp
                    and osm_timestamp::timestamp &lt;= '2008-05-04'::timestamp
                  then 'yes'
              when osm_uid = '15169' -- Milenko
                    and osm_timestamp::timestamp &gt;= '2007-10-29'::timestamp
                    and osm_timestamp::timestamp &lt;= '2007-12-12'::timestamp
                  then 'yes'
              else 'no' end) as is_tiger
        from &prefix;_line
        where highway is not null
        order by is_tiger desc) as roads
    </Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
